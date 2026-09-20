

void initNames();


void freeNames();


// results destroyed internally when freeNames called
// inFemale true if female, false if male
const char *findCloseFirstName( const char *inString, char inFemale );

const char *findCloseLastName( const char *inString );


// for names returned by findClose calls
int getFirstNameIndex( char *inFirstName, char inFemale );

int getLastNameIndex( char *inLastName );


const char *getFirstName( int inIndex, int *outNextIndex, char inFemale );

const char *getLastName( int inIndex, int *outNextIndex );


const char *getRandomFirstName( char inFemale );

const char *getRandomLastName();
