#pragma once

// BGMI (4.4.0 -- 64Bit) SDK tool By BEST @RXJOKER1
// Telegramchannel:- @RXJOKER1
// This file was generatedWed May 20 07:18:47 2026
 
#include "../SDK.hpp"

namespace SDK
{
//---------------------By BEST @RXJOKER1---------------------------
//Parameters
//---------------------By BEST @RXJOKER1---------------------------

// Function QDevKit.FilePicker.UnInitialize
struct UFilePicker_UnInitialize_Params
{
};

// Function QDevKit.FilePicker.OpenFilePicker
struct UFilePicker_OpenFilePicker_Params
{
	struct FString                                     InParamJson;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QDevKit.FilePicker.Initialize
struct UFilePicker_Initialize_Params
{
};

// Function QDevKit.FilePicker.GetInstance
struct UFilePicker_GetInstance_Params
{
	class UFilePicker*                                 ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// DelegateFunction QDevKit.FilePicker.FileSelectionCompleteDelegate__DelegateSignature
struct UFilePicker_FileSelectionCompleteDelegate__DelegateSignature_Params
{
	struct FString                                     ResultJson;                                               // (Parm, ZeroConstructor)
};

// Function QDevKit.FirebaseHelper.SetConsent
struct UFirebaseHelper_SetConsent_Params
{
	TMap<int, int>                                     InConsent;                                                // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function QDevKit.FirebaseHelper.IsNotificationLaunchApp
struct UFirebaseHelper_IsNotificationLaunchApp_Params
{
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QDevKit.FirebaseHelper.GetNotificationLaunchAppExtraData
struct UFirebaseHelper_GetNotificationLaunchAppExtraData_Params
{
	struct FString                                     InKey;                                                    // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function QDevKit.FirebaseHelper.GetInstance
struct UFirebaseHelper_GetInstance_Params
{
	class UFirebaseHelper*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QDevKit.FirebaseHelper.GetFIRInstallId
struct UFirebaseHelper_GetFIRInstallId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function QDevKit.FirebaseHelper.GetFIRAppInstanceId
struct UFirebaseHelper_GetFIRAppInstanceId_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function QDevKit.FirebaseHelper.GetFCMToken
struct UFirebaseHelper_GetFCMToken_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function QDevKit.FirebaseHelper.ConsumeNotificationLaunchApp
struct UFirebaseHelper_ConsumeNotificationLaunchApp_Params
{
};

// Function QDevKit.FirebaseRemoteConfigImpl.GetStatus
struct UFirebaseRemoteConfigImpl_GetStatus_Params
{
	EQFirebaseRemoteConfigStatus                       ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QDevKit.FirebaseRemoteConfigImpl.GetRemoteConfig
struct UFirebaseRemoteConfigImpl_GetRemoteConfig_Params
{
	struct FString                                     ConfigNameToQuery;                                        // (Parm, ZeroConstructor)
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function QDevKit.FirebaseRemoteConfigImpl.GetInstance
struct UFirebaseRemoteConfigImpl_GetInstance_Params
{
	class UFirebaseRemoteConfigImpl*                   ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QDevKit.LocationHelper.QueryLocation
struct ULocationHelper_QueryLocation_Params
{
	int                                                InTimeout;                                                // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QDevKit.LocationHelper.Initialize
struct ULocationHelper_Initialize_Params
{
};

// Function QDevKit.LocationHelper.GetInstance
struct ULocationHelper_GetInstance_Params
{
	class ULocationHelper*                             ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QDevKit.LocationHelper.Destroy
struct ULocationHelper_Destroy_Params
{
};

// Function QDevKit.PhotoAlbumHelper.UnRegisterScreenCaptureListener
struct UPhotoAlbumHelper_UnRegisterScreenCaptureListener_Params
{
};

// Function QDevKit.PhotoAlbumHelper.RegisterScreenCaptureListener
struct UPhotoAlbumHelper_RegisterScreenCaptureListener_Params
{
	struct FString                                     InScreenshotFolders;                                      // (Parm, ZeroConstructor)
	struct FString                                     InScreenshotMimeTypes;                                    // (Parm, ZeroConstructor)
};

// Function QDevKit.PhotoAlbumHelper.Initialize
struct UPhotoAlbumHelper_Initialize_Params
{
};

// Function QDevKit.PhotoAlbumHelper.GetInstance
struct UPhotoAlbumHelper_GetInstance_Params
{
	class UPhotoAlbumHelper*                           ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QDevKit.PhotoAlbumHelper.GenerateImageFromAlbum
struct UPhotoAlbumHelper_GenerateImageFromAlbum_Params
{
	struct FString                                     InFilePath;                                               // (Parm, ZeroConstructor)
	struct FString                                     InThumbFilePath;                                          // (Parm, ZeroConstructor)
	int                                                InThumbnailWidth;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InThumbnailHeight;                                        // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InForceJPG;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               InOverride;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QDevKit.PhotoAlbumHelper.FetchAlbumImageInfo
struct UPhotoAlbumHelper_FetchAlbumImageInfo_Params
{
	int                                                InStartIndex;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InLimitNum;                                               // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InThumbWidth;                                             // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InThumbHeight;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	struct FString                                     InThumbPath;                                              // (Parm, ZeroConstructor)
	struct FString                                     InExtraJson;                                              // (Parm, ZeroConstructor)
};

// Function QDevKit.StoreKit.RequestReview
struct UStoreKit_RequestReview_Params
{
	bool                                               bForceOpenStoreInTestEnv;                                 // (Parm, ZeroConstructor, IsPlainOldData)
};

// Function QDevKit.StoreKit.OpenStorePage
struct UStoreKit_OpenStorePage_Params
{
	struct FString                                     storeParam;                                               // (Parm, ZeroConstructor)
};

// Function QDevKit.StoreKit.GetCountryCode
struct UStoreKit_GetCountryCode_Params
{
	struct FScriptDelegate                             Callback;                                                 // (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)
};

// Function QDevKit.SystemPermissionHelper.RequestPermissions
struct USystemPermissionHelper_RequestPermissions_Params
{
	int                                                InPermissionType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	int                                                InRequestCode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QDevKit.SystemPermissionHelper.IsPermissionGranted
struct USystemPermissionHelper_IsPermissionGranted_Params
{
	int                                                InPermissionType;                                         // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QDevKit.SystemPermissionHelper.Initialize
struct USystemPermissionHelper_Initialize_Params
{
};

// Function QDevKit.SystemPermissionHelper.GetInstance
struct USystemPermissionHelper_GetInstance_Params
{
	class USystemPermissionHelper*                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QDevKit.SystemPermissionHelper.AndroidShouldShowRequestPermissionRationale
struct USystemPermissionHelper_AndroidShouldShowRequestPermissionRationale_Params
{
	struct FString                                     InPermission;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QDevKit.SystemPermissionHelper.AndroidRequestPermissions
struct USystemPermissionHelper_AndroidRequestPermissions_Params
{
	struct FString                                     InPermission;                                             // (Parm, ZeroConstructor)
	int                                                InRequestCode;                                            // (Parm, ZeroConstructor, IsPlainOldData)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QDevKit.SystemPermissionHelper.AndroidIsPermissionGranted
struct USystemPermissionHelper_AndroidIsPermissionGranted_Params
{
	struct FString                                     InPermission;                                             // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QDevKit.SystemPermissionHelper.AndroidHasDefinePermission
struct USystemPermissionHelper_AndroidHasDefinePermission_Params
{
	struct FString                                     InPermssionName;                                          // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QDevKit.TouchTransmission.UnInitialize
struct UTouchTransmission_UnInitialize_Params
{
};

// DelegateFunction QDevKit.TouchTransmission.TransmissionCompleteDelegate__DelegateSignature
struct UTouchTransmission_TransmissionCompleteDelegate__DelegateSignature_Params
{
	struct FString                                     ResultJson;                                               // (Parm, ZeroConstructor)
};

// Function QDevKit.TouchTransmission.Initialize
struct UTouchTransmission_Initialize_Params
{
};

// Function QDevKit.TouchTransmission.HandleReceivedPakFiles
struct UTouchTransmission_HandleReceivedPakFiles_Params
{
	struct FString                                     InParamJson;                                              // (Parm, ZeroConstructor)
	bool                                               ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

// Function QDevKit.TouchTransmission.GetTransmissionRawJsonContent
struct UTouchTransmission_GetTransmissionRawJsonContent_Params
{
	struct FString                                     ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm)
};

// Function QDevKit.TouchTransmission.GetInstance
struct UTouchTransmission_GetInstance_Params
{
	class UTouchTransmission*                          ReturnValue;                                              // (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)
};

}

