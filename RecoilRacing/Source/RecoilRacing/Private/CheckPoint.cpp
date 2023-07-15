// Fill out your copyright notice in the Description page of Project Settings.


#include "CheckPoint.h"

bool ACheckPoint::TryActivate()
{
	if (bActivated) 
	{
		return false;
	}
	
	bActivated = true;
	return true;
}