#include "megaman.h"

//=============================================================================
// Constructor
//=============================================================================
MegaMan::MegaMan()
{}

//=============================================================================
// Destructor
//=============================================================================
MegaMan::~MegaMan()
{
	releaseAll();           // call onLostDevice() for every graphics item
}

//=============================================================================
// Initializes the game
// Throws GameError on error
//=============================================================================
void MegaMan::initialize(HWND hwnd)
{
	Game::initialize(hwnd); // throws GameError

	return;
}

//=============================================================================
// Update all game items
//=============================================================================
void MegaMan::update()
{}

//=============================================================================
// Artificial Intelligence
//=============================================================================
void MegaMan::ai()
{}

//=============================================================================
// Handle collisions
//=============================================================================
void MegaMan::collisions()
{}

//=============================================================================
// Render game items
//=============================================================================
void MegaMan::render()
{
}

//=============================================================================
// The graphics device was lost.
// Release all reserved video memory so graphics device may be reset.
//=============================================================================
void MegaMan::releaseAll()
{
	Game::releaseAll();
	return;
}

//=============================================================================
// The grahics device has been reset.
// Recreate all surfaces.
//=============================================================================
void MegaMan::resetAll()
{
	Game::resetAll();
	return;
}