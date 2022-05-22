object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 567
  ClientWidth = 655
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object flightInfo: TGroupBox
    Left = 96
    Top = 8
    Width = 417
    Height = 513
    Caption = 'Booking Info'
    Color = clCream
    Ctl3D = True
    ParentBackground = False
    ParentColor = False
    ParentCtl3D = False
    TabOrder = 0
    object firstName: TLabel
      Left = 40
      Top = 51
      Width = 73
      Height = 25
      Caption = 'firstName'
      Color = clGreen
      ParentColor = False
    end
    object surName: TLabel
      Left = 40
      Top = 104
      Width = 48
      Height = 13
      Caption = 'sureName'
      Color = clGreen
      ParentColor = False
    end
    object Email: TLabel
      Left = 40
      Top = 155
      Width = 69
      Height = 13
      Caption = ' Email Address'
      Color = clGreen
      ParentColor = False
    end
    object passport: TLabel
      Left = 40
      Top = 211
      Width = 45
      Height = 13
      Caption = 'Passport '
      Color = clGreen
      ParentColor = False
    end
    object visa: TLabel
      Left = 40
      Top = 267
      Width = 55
      Height = 13
      Caption = 'Visa Upload'
      Color = clGreen
      ParentColor = False
    end
    object classes: TLabel
      Left = 40
      Top = 323
      Width = 25
      Height = 13
      Caption = 'Class'
      Color = clGreen
      ParentColor = False
    end
    object Label6: TLabel
      Left = 40
      Top = 371
      Width = 46
      Height = 13
      Caption = 'firstName'
      Color = clGreen
      ParentColor = False
    end
    object fNameEdit: TEdit
      Left = 144
      Top = 48
      Width = 185
      Height = 21
      Alignment = taCenter
      TabOrder = 0
      Text = 'firstName'
    end
    object surNameEdit: TEdit
      Left = 144
      Top = 104
      Width = 185
      Height = 21
      Alignment = taCenter
      TabOrder = 1
      Text = 'surName'
    end
    object emailEdit: TEdit
      Left = 144
      Top = 152
      Width = 185
      Height = 30
      HelpType = htKeyword
      HelpKeyword = 'k@gmail.com'
      Alignment = taCenter
      DragCursor = crIBeam
      MaxLength = 25
      ParentShowHint = False
      ShowHint = True
      TabOrder = 2
      Text = 'EmailAddress'
    end
    object Edit3: TEdit
      Left = 144
      Top = 208
      Width = 185
      Height = 29
      TabOrder = 3
      Text = 'fNameEdit'
    end
    object Edit4: TEdit
      Left = 144
      Top = 264
      Width = 185
      Height = 29
      NumbersOnly = True
      TabOrder = 4
      Text = 'fNameEdit'
    end
    object Edit5: TEdit
      Left = 144
      Top = 320
      Width = 185
      Height = 29
      TabOrder = 5
      Text = 'fNameEdit'
    end
    object Edit6: TEdit
      Left = 144
      Top = 368
      Width = 185
      Height = 30
      TabOrder = 6
      Text = 'fNameEdit'
    end
  end
end
