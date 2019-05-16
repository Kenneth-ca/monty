/**
 * read_file - a function that get instructions from a file
 * @name: name of the file
 *
 */
void read_file(char *name)
{
    char *file_info = NULL;
    size_t buffsize = 0;

    if (getline(&file_info, &buffsize, name))
    {
        return(file_info)
    }
    else
    {

    }
}
