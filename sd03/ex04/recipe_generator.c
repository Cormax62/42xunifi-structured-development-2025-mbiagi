#include "recipe_generator.h"

// Fetch current ingredients from fridge. Returns a new Ingredients* or NULL on failure.
struct Ingredients *get_current_ingredients(void);
// Fetch user taste profile. Returns a new TasteProfile* or NULL on failure.
struct TasteProfile *get_user_taste_profile(void);
// Generate a new recipe candidate based on ingredients & taste. Returns a new Recipe* or NULL on
failure.
struct Recipe *create_recipe(struct Ingredients *ingredients, struct TasteProfile *taste);
// Ask user approval for the given recipe. Returns 1 if approved, 0 otherwise.
int get_user_approval(struct Recipe *recipe);
// Free functions for cleanup:
void free_ingredients(struct Ingredients *ing);
void free_taste_profile(struct TasteProfile *tp);
void free_recipe(struct Recipe *recipe);

struct Recipe *create_custom_recipe(void)
{
	struct Recipe 		*recipe;
	struct Ingredients *ingredients;
	struct TasteProfile *user;

	user = get_user_taste_profile();
	if (!user)
		return (NULL);
	ingredients = get_current_ingredients();
	recipe = create_recipe(ingredients, user);
	free_ingredients(ingredients);
	free_taste_profile(*user);
	return (recipe);
}
