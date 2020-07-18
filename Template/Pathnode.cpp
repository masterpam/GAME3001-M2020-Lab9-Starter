#include "PathNode.h"
#include "CollisionManager.h"

PathNode::PathNode()
    :m_bLOS(false) 
{
    setWidth(40);
    setHeight(40); 
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