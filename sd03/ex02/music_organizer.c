#include "music_organizer.h"

// Creates and returns a new music library. Returns NULL on fail
struct MusicLibrary *create_music_library();
// Scans a directory for music files. Returns a NULL terminated array of filenames.
const char **scan_directory(const char *directory_path);
// Processes a single music file. Returns a data structure representing the processed file.
struct MusicFile *process_music_file(const char *directory_path, const char *filename);
// Updates the music library with the processed music file information.
void update_music_library(struct MusicLibrary *library, struct MusicFile *song);

struct MusicLibrary *organize_music_library(const char *directory_path)
{
	MusicLibrary	*lib;
	MusicFile		*songs;
	const char		*files;
	int				i;

	i = 0;
	lib = create_music_library();
	files = scan_directory(directory_path);
	while (files[i])
	{
		songs = process_music_file(directory_path, files[i]);
		i++;
	}
	update_music_library(lib, songs);
	return (lib);
}
