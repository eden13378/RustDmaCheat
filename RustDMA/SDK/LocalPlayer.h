#pragma once
class LocalPlayer
{
	/*
	"Address": 55061896,
      "Name": "LocalPlayer_TypeInfo",
      "Signature": "LocalPlayer_c*"
	*/
	uint64_t Class = 0x3482D88;
	//Dump.cs / DummyDLL
	uint64_t StaticField = 0xB8;// Static Padding To Access Static Fields
	uint64_t BasePlayerBackingField = 0x0; // private static BasePlayer <Entity>k__BackingField;
public:
	LocalPlayer();
	uint64_t GetBasePlayer();
};