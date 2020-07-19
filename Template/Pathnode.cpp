#include "PathNode.h"
#include "CollisionManager.h"

PathNode::PathNode()
    :m_bLOS(false) 
{
    setWidth(Config::TILE_SIZE);
    setHeight(Config::TILE_SIZE); 
    setType(PATH_NODE);  

}

PathNode::~PathNode()
= default; 

void PathNode::draw()
{


}


void PathNode::update()
{

   

         
} 

void PathNode::clean()
{


}

void PathNode::setLOS(bool LOS)
{

    m_bLOS = LOS; 


}

void PathNode::getLOS()const
{
    return m_bLOS; 

}