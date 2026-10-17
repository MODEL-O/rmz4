// undefined FUN_08055068(void)
// entry 0x8055068


undefined8 FUN_08055068(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 in_lr;
  
  while ((*(byte *)(param_1 + 0xb6) & 4) == 0) {
    iVar3 = *(int *)(param_1 + 100);
    iVar1 = *(int *)(param_1 + 0x5c) + iVar3;
    *(int *)(param_1 + 0x5c) = iVar1;
    if (iVar3 < 0) {
      iVar4 = DAT_08055090;
      if (iVar1 < DAT_08055090) {
LAB_0805509c:
        *(int *)(param_1 + 0x5c) = iVar4;
      }
    }
    else {
      iVar4 = 0x200;
      if (0x200 < iVar1) goto LAB_0805509c;
    }
    iVar4 = *(int *)(param_1 + 0x5c);
    iVar1 = FUN_08128fb8(iVar4,-iVar3);
    iVar1 = (iVar4 * 2 + -iVar3 * (-iVar1 + 1)) * -iVar1 >> 1;
    iVar3 = *(int *)(param_1 + 0x54);
    if (((iVar3 + iVar1) - *(int *)(param_1 + 0xc0)) + 0x7800U < 0xf001) {
      if (iVar1 < 0) {
        iVar1 = -iVar1;
      }
      if ((uint)(iVar1 * 2) < (uint)((iVar3 - param_2) + iVar1)) {
        *(int *)(param_1 + 0x54) = iVar3 + iVar4;
        goto LAB_08055164;
      }
    }
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb6) | 4;
  }
  iVar1 = *(int *)(param_1 + 0x5c) - *(int *)(param_1 + 100);
  *(int *)(param_1 + 0x5c) = iVar1;
  iVar1 = *(int *)(param_1 + 0x54) + iVar1;
  *(int *)(param_1 + 0x54) = iVar1;
  iVar3 = *(int *)(param_1 + 0xc0) + DAT_08055118;
  if (iVar1 < iVar3) {
    *(int *)(param_1 + 0x54) = iVar3;
    uVar2 = 0;
    goto LAB_08055166;
  }
  iVar3 = *(int *)(param_1 + 0xc0) + 0x7800;
  if (iVar3 < iVar1) {
    *(int *)(param_1 + 0x54) = iVar3;
    uVar2 = 0;
    goto LAB_08055166;
  }
  if (*(int *)(param_1 + 100) < 0) {
    if ((param_2 != 0) && (iVar1 <= param_2)) {
LAB_08055148:
      *(int *)(param_1 + 0x54) = param_2;
      uVar2 = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
      goto LAB_08055166;
    }
    if (0 < *(int *)(param_1 + 0x5c)) {
LAB_08055156:
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
  }
  else {
    if ((param_2 != 0) && (param_2 <= iVar1)) goto LAB_08055148;
    if (*(int *)(param_1 + 0x5c) < 0) goto LAB_08055156;
  }
  if (*(int *)(param_1 + 0x5c) == 0) {
    uVar2 = 0;
  }
  else {
LAB_08055164:
    uVar2 = 1;
  }
LAB_08055166:
  return CONCAT44(in_lr,uVar2);
}


