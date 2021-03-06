(*****************************************)
(*      This file is autogenerated       *)
(*   Any manual changes will be LOST!    *)
(*****************************************)
(* Generated 2002-04-05 14:41:34         *)
(*****************************************)
(* This file should be stored in the     *)
(* same directory as the form/datamodule *)
(* with the corresponding model          *)
(*****************************************)
(* Copyright notice:                     *)
(*                                       *)
(*****************************************)

{$IFNDEF ComboBoxClasses_Interface.inc}
{$DEFINE ComboBoxClasses_Interface.inc}

{$IFNDEF ComboBoxClasses_unitheader}
unit ComboBoxClasses;
{$ENDIF}

interface

uses
  // interface uses
  // interface dependencies
  // attribute classes
  BoldAttributes,
  // other
  Classes,
  Controls, // for TDate
  SysUtils,
  BoldDefs,
  BoldSubscription,
  BoldDeriver,
  BoldElements,
  BoldDomainElement,
  BoldSystemRT,
  BoldSystem;

type
  { forward declarations of all classes }

  TBusinessClassesRoot = class;
  TBusinessClassesRootList = class;
  TFood = class;
  TFoodList = class;
  TPerson = class;
  TPersonList = class;
  TSchool = class;
  TSchoolList = class;

  TBusinessClassesRoot = class(TBoldObject)
  private
  protected
  public
  end;

  TFood = class(TBusinessClassesRoot)
  private
    function _Get_M_Name: TBAString;
    function _GetName: String;
    procedure _SetName(NewValue: String);
    function _GetIsFavouredBy: TPersonList;
  protected
  public
    property M_Name: TBAString read _Get_M_Name;
    property M_IsFavouredBy: TPersonList read _GetIsFavouredBy;
    property Name: String read _GetName write _SetName;
    property IsFavouredBy: TPersonList read _GetIsFavouredBy;
  end;

  TPerson = class(TBusinessClassesRoot)
  private
    function _Get_M_Name: TBAString;
    function _GetName: String;
    procedure _SetName(NewValue: String);
    function _Get_M_AttendsSchool: TBAString;
    function _GetAttendsSchool: String;
    procedure _SetAttendsSchool(NewValue: String);
    function _Get_M_Major: TBAString;
    function _GetMajor: String;
    procedure _SetMajor(NewValue: String);
    function _Get_M_FavouriteMusic: TBAString;
    function _GetFavouriteMusic: String;
    procedure _SetFavouriteMusic(NewValue: String);
    function _GetPreferredFood: TFood;
    function _Get_M_PreferredFood: TBoldObjectReference;
    procedure _SetPreferredFood(value: TFood);
  protected
  public
    procedure CompleteCreate; override;
    property M_Name: TBAString read _Get_M_Name;
    property M_AttendsSchool: TBAString read _Get_M_AttendsSchool;
    property M_Major: TBAString read _Get_M_Major;
    property M_FavouriteMusic: TBAString read _Get_M_FavouriteMusic;
    property M_PreferredFood: TBoldObjectReference read _Get_M_PreferredFood;
    property Name: String read _GetName write _SetName;
    property AttendsSchool: String read _GetAttendsSchool write _SetAttendsSchool;
    property Major: String read _GetMajor write _SetMajor;
    property FavouriteMusic: String read _GetFavouriteMusic write _SetFavouriteMusic;
    property PreferredFood: TFood read _GetPreferredFood write _SetPreferredFood;
  end;

  TSchool = class(TBusinessClassesRoot)
  private
    function _Get_M_Name: TBAString;
    function _GetName: String;
    procedure _SetName(NewValue: String);
  protected
  public
    property M_Name: TBAString read _Get_M_Name;
    property Name: String read _GetName write _SetName;
  end;

  TBusinessClassesRootList = class(TBoldObjectList)
  protected
    function GetBoldObject(index: Integer): TBusinessClassesRoot;
    procedure SetBoldObject(index: Integer; NewObject: TBusinessClassesRoot);
  public
    function Includes(anObject: TBusinessClassesRoot): Boolean;
    function IndexOf(anObject: TBusinessClassesRoot): Integer;
    procedure Add(NewObject: TBusinessClassesRoot);
    function AddNew: TBusinessClassesRoot;
    procedure Insert(index: Integer; NewObject: TBusinessClassesRoot);
    property BoldObjects[index: Integer]: TBusinessClassesRoot read GetBoldObject write SetBoldObject; default;
  end;

  TFoodList = class(TBusinessClassesRootList)
  protected
    function GetBoldObject(index: Integer): TFood;
    procedure SetBoldObject(index: Integer; NewObject: TFood);
  public
    function Includes(anObject: TFood): Boolean;
    function IndexOf(anObject: TFood): Integer;
    procedure Add(NewObject: TFood);
    function AddNew: TFood;
    procedure Insert(index: Integer; NewObject: TFood);
    property BoldObjects[index: Integer]: TFood read GetBoldObject write SetBoldObject; default;
  end;

  TPersonList = class(TBusinessClassesRootList)
  protected
    function GetBoldObject(index: Integer): TPerson;
    procedure SetBoldObject(index: Integer; NewObject: TPerson);
  public
    function Includes(anObject: TPerson): Boolean;
    function IndexOf(anObject: TPerson): Integer;
    procedure Add(NewObject: TPerson);
    function AddNew: TPerson;
    procedure Insert(index: Integer; NewObject: TPerson);
    property BoldObjects[index: Integer]: TPerson read GetBoldObject write SetBoldObject; default;
  end;

  TSchoolList = class(TBusinessClassesRootList)
  protected
    function GetBoldObject(index: Integer): TSchool;
    procedure SetBoldObject(index: Integer; NewObject: TSchool);
  public
    function Includes(anObject: TSchool): Boolean;
    function IndexOf(anObject: TSchool): Integer;
    procedure Add(NewObject: TSchool);
    function AddNew: TSchool;
    procedure Insert(index: Integer; NewObject: TSchool);
    property BoldObjects[index: Integer]: TSchool read GetBoldObject write SetBoldObject; default;
  end;

function GeneratedCodeCRC: String;

implementation

{$ENDIF}

