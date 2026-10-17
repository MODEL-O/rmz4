// undefined FUN_0803af30(void)
// entry 0x803af30


undefined8 FUN_0803af30(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0x11);
  if (bVar1 == 1) {
    *param_2 = *(int *)(param_1 + 0x54);
    param_2[1] = *(int *)(param_1 + 0x58) + 0x1000;
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
LAB_0803af8c:
      uVar3 = 0;
      goto LAB_0803af92;
    }
    *param_2 = *(int *)(param_1 + 0x54);
    param_2[1] = *(int *)(param_1 + 0x58) + DAT_0803af5c;
  }
  else {
    if (bVar1 == 2) {
      iVar2 = *(int *)(param_1 + 0x54);
      iVar4 = 0x1000;
    }
    else {
      if (bVar1 != 3) goto LAB_0803af8c;
      iVar2 = *(int *)(param_1 + 0x54);
      iVar4 = DAT_0803af88;
    }
    *param_2 = iVar2 + iVar4;
    param_2[1] = *(int *)(param_1 + 0x58);
  }
  uVar3 = 1;
LAB_0803af92:
  return CONCAT44(in_lr,uVar3);
}


