// Fill out your copyright notice in the Description page of Project Settings.

#include "DateTimeFunctionLibrary.h"

int32 UDateTimeFunctionLibrary::GetDayOfWeek( FDateTime DateTime ) 

{
	return ( int32 ) DateTime.GetDayOfWeek();
}


FDateTime UDateTimeFunctionLibrary::AddTimeSpanToDateTime( const FDateTime& DateTime, const FTimespan& Timespan )
{
	return  DateTime + Timespan;
}