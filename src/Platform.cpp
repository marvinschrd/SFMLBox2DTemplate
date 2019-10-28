﻿#include "Platform.h"
#include "SFML/Graphics.hpp"
#include "Box2D/Box2D.h"
#include "globals.h"
#include <iostream>

Platform::Platform() 
{
	gameObjectType_ = GameObjectType::PLATFORM;
	/*if (!platformTexture_.loadFromFile("data/Grass.png"))
	{
		std::cerr << "[Error] Could not load hero texture\n";
	}
	platformSprite_.setTexture(platformTexture_);*/


}

void Platform::Init(b2World& world)
{
	//platform1

	/*if (!platformTexture_.loadFromFile("data/platformFull1.png"))
	{
		std::cerr << "[Error] Could not load hero texture\n";
	}
	platformSprite_.setTexture(platformTexture_);

	platformSprite_.setPosition(20, 200);*/
	
	/*for (int i = 0; i < 4; i++)
	{
		platformsSprite1.push_back(platformSprite_);
	}*/

	/*for (int i = 0; i < platformsSprite1.size(); i++) {
		platformsSprite1[i].setPosition(20.0f + (i * 40.0f), 200.0f);
	}*/
	b2BodyDef bodyDef1;
	bodyDef1.type = b2_staticBody;
	bodyDef1.position = pixel2meter(platform1);
	platformBody1_ = world.CreateBody(&bodyDef1);
	b2PolygonShape shape1;
	shape1.SetAsBox(pixel2meter(boxSize1.x / 2.0f), pixel2meter(boxSize1.y / 2.0f));

	boxPlatform1RectDebug_.setSize(boxSize1);
	boxPlatform1RectDebug_.setOrigin(boxSize1 / 2.0f);
	boxPlatform1RectDebug_.setFillColor(sf::Color(0, 255, 0, 120));
	boxPlatform1RectDebug_.setOutlineColor(sf::Color::Green);
	boxPlatform1RectDebug_.setOutlineThickness(2.0f);

	b2FixtureDef fixtureDef1;
	fixtureDef1.shape = &shape1;
	fixtureDef1.friction = 0.0f;
	fixtureDef1.density = 1;
	fixtureDef1.userData = this;
	platformBody1_->CreateFixture(&fixtureDef1);
	
	//platform2
	/*for (int i = 0; i < 4; i++)
	{
		platformsSprite2.push_back(platformSprite_);
	}
	for (int i = 0; i < platformsSprite2.size(); i++) {
		platformsSprite2[i].setPosition(600.0f + (i * 40.0f), 250.0f);
	}*/
	b2BodyDef bodyDef2;
	bodyDef2.type = b2_staticBody;
	bodyDef2.position = pixel2meter(platform2);
	platformBody2_ = world.CreateBody(&bodyDef2);
	
	b2PolygonShape shape2;
	shape2.SetAsBox(pixel2meter(boxSize2.x / 2.0f), pixel2meter(boxSize2.y / 2.0f));

	boxPlatform2RectDebug_.setSize(boxSize2);
	boxPlatform2RectDebug_.setOrigin(boxSize2 / 2.0f);
	boxPlatform2RectDebug_.setFillColor(sf::Color(0, 255, 0, 120));
	boxPlatform2RectDebug_.setOutlineColor(sf::Color::Red);
	boxPlatform2RectDebug_.setOutlineThickness(2.0f);

	b2FixtureDef fixtureDef2;
	fixtureDef2.shape = &shape2;
	fixtureDef2.friction = 0.0f;
	fixtureDef2.density = 1;
	fixtureDef2.userData = this;
	platformBody2_->CreateFixture(&fixtureDef2);
	
	//platform3
	/*for (int i = 0; i < 7; i++)
	{
		platformsSprite3.push_back(platformSprite_);
	}
	for (int i = 0; i < platformsSprite3.size(); i++) {
		platformsSprite3[i].setPosition(150.0f + (i * 40.0f), 400.0f);
	}*/
	
	b2BodyDef bodyDef3;
	bodyDef3.type = b2_staticBody;
	bodyDef3.position = pixel2meter(platform3);
	platformBody3_ = world.CreateBody(&bodyDef3);
	b2PolygonShape shape3;
	shape3.SetAsBox(pixel2meter(boxSize3.x / 2.0f), pixel2meter(boxSize3.y / 2.0f));

	boxPlatform3RectDebug_.setSize(boxSize3);
	boxPlatform3RectDebug_.setOrigin(boxSize3 / 2.0f);
	boxPlatform3RectDebug_.setFillColor(sf::Color(0, 255, 0, 120));
	boxPlatform3RectDebug_.setOutlineColor(sf::Color::Blue);
	boxPlatform3RectDebug_.setOutlineThickness(2.0f);

	b2FixtureDef fixtureDef3;
	fixtureDef3.shape = &shape3;
	fixtureDef3.friction = 0.0f;
	fixtureDef3.density = 1;
	fixtureDef3.userData = this;
	platformBody3_->CreateFixture(&fixtureDef3);

	///

	b2BodyDef bodyDef4;
	bodyDef4.type = b2_staticBody;
	bodyDef4.position = pixel2meter(platform4);
	platformBody4_ = world.CreateBody(&bodyDef4);
	b2PolygonShape shape4;
	shape4.SetAsBox(pixel2meter(boxSize4.x / 2.0f), pixel2meter(boxSize4.y / 2.0f));

	boxPlatform4RectDebug_.setSize(boxSize4);
	boxPlatform4RectDebug_.setOrigin(boxSize4 / 2.0f);
	boxPlatform4RectDebug_.setFillColor(sf::Color(0, 255, 0, 120));
	boxPlatform4RectDebug_.setOutlineColor(sf::Color::Yellow);
	boxPlatform4RectDebug_.setOutlineThickness(2.0f);

	b2FixtureDef fixtureDef4;
	fixtureDef4.shape = &shape4;
	fixtureDef4.friction = 0.0f;
	fixtureDef4.density = 1;
	fixtureDef4.userData = this;
	platformBody4_->CreateFixture(&fixtureDef4);
	
	
}
void Platform::DrawPlatform(sf::RenderWindow& window)
{
	if (!platformTexture_.loadFromFile("data/platformFull1.png"))
	{
		std::cerr << "[Error] Could not load hero texture\n";
	}
	platformSprite_.setTexture(platformTexture_);

	platformSprite_.setPosition(20, 200);
	
	window.draw(platformSprite_);
	/*for (int i = 0; i < platformsSprite1.size(); i++)
	{
	
		window.draw(platformsSprite1[i]);
		
	}*/

	if (!platformTexture_.loadFromFile("data/platformFull1.png"))
	{
		std::cerr << "[Error] Could not load texture\n";
	}
	platformSprite_.setTexture(platformTexture_);

	platformSprite_.setPosition(600, 250);
	window.draw(platformSprite_);
	
	/*for (int i = 0; i < platformsSprite2.size(); i++)
	{
		window.draw(platformsSprite2[i]);
		
	}*/

	if (!platformTextureBig_.loadFromFile("data/big.png"))
	{
		std::cerr << "[Error] Could not load texture\n";
	}
	platformSpriteBig_.setTexture(platformTextureBig_);

	platformSpriteBig_.setPosition(150, 400);
	window.draw(platformSpriteBig_);

	if (!platformTexture_.loadFromFile("data/spike.png"))
	{
		std::cerr << "[Error] Could not load hero texture\n";
	}
	platformSprite_.setTexture(platformTexture_);

	platformSprite_.setPosition(280, 370);
	window.draw(platformSprite_);

	if (!platformTexture_.loadFromFile("data/spike.png"))
	{
		std::cerr << "[Error] Could not load hero texture\n";
	}
	platformSprite_.setTexture(platformTexture_);

	platformSprite_.setPosition(295, 370);
	window.draw(platformSprite_);

	if (!platformTexture_.loadFromFile("data/spike.png"))
	{
		std::cerr << "[Error] Could not load hero texture\n";
	}
	platformSprite_.setTexture(platformTexture_);

	platformSprite_.setPosition(265, 370);
	window.draw(platformSprite_);
	
	/*for (int i = 0; i < platformsSprite3.size(); i++)
	{
		window.draw(platformsSprite3[i]);
		
	}*/

	boxPlatform2RectDebug_.setPosition(meter2pixel(platformBody2_->GetPosition()));
	boxPlatform1RectDebug_.setPosition(meter2pixel(platformBody1_->GetPosition()));
	boxPlatform3RectDebug_.setPosition(meter2pixel(platformBody3_->GetPosition()));
	/*window.draw(boxPlatform3RectDebug_);
	window.draw(boxPlatform1RectDebug_);
	window.draw(boxPlatform2RectDebug_);*/
	
}



