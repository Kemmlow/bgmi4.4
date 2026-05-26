#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:38 2026
 
namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Classes
//---------------------By BEST @RXJOKER1---------------------------

// Class Renderer.SparseVolumeTextureViewerComponent
// 0x0040 (0x0980 - 0x0940)
class USparseVolumeTextureViewerComponent : public UPrimitiveComponent
{
public:
	class USparseVolumeTexture*                        SparseVolumeTexturePreview;                               // 0x0940(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Frame;                                                    // 0x0948(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              FrameRate;                                                // 0x094C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      bPlayIng : 1;                                             // 0x0950(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bLooping : 1;                                             // 0x0950(0x0001) (Edit, BlueprintVisible)
	unsigned char                                      bReversePlayback : 1;                                     // 0x0950(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bBlockingStreamingRequests : 1;                           // 0x0950(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bApplyPerFrameTransforms : 1;                             // 0x0950(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      bPivotAtCentroid : 1;                                     // 0x0950(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly)
	unsigned char                                      UnknownData00[0x3];                                       // 0x0951(0x0003) MISSED OFFSET
	float                                              VoxelSize;                                                // 0x0954(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	ESparseVolumeTexturePreviewAttribute               PreviewAttribute;                                         // 0x0958(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x3];                                       // 0x0959(0x0003) MISSED OFFSET
	int                                                MipLevel;                                                 // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	float                                              Extinction;                                               // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData02[0x1C];                                      // 0x0964(0x001C) MISSED OFFSET

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Renderer.SparseVolumeTextureViewerComponent");
		return pStaticClass;
	}

};


// Class Renderer.SparseVolumeTextureViewer
// 0x0008 (0x04B8 - 0x04B0)
class ASparseVolumeTextureViewer : public AInfo
{
public:
	class USparseVolumeTextureViewerComponent*         SparseVolumeTextureViewerComponent;                       // 0x04B0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData)

	static UClass* StaticClass()
	{
        static UClass *pStaticClass = 0;
        if (!pStaticClass)
            pStaticClass = UObject::FindClass("Class Renderer.SparseVolumeTextureViewer");
		return pStaticClass;
	}

};


}

