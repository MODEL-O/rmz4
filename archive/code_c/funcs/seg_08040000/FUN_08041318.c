// undefined FUN_08041318(void)
// entry 0x8041318


undefined8 FUN_08041318(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 in_lr;
  
  uVar3 = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70));
  if (uVar3 == DAT_0804133c) {
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar1 = *(int *)(param_1 + 0x54);
      iVar4 = DAT_08041398;
    }
    else {
      iVar1 = *(int *)(param_1 + 0x54);
      iVar4 = 0x1300;
    }
    *param_2 = iVar1 + iVar4;
    iVar1 = *(int *)(param_1 + 0x58);
    iVar4 = DAT_0804139c;
LAB_080413c2:
    param_2[1] = iVar1 + iVar4;
    uVar2 = 0;
  }
  else {
    if ((int)DAT_0804133c < (int)uVar3) {
      if (uVar3 == 0x2400) {
        if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
          iVar1 = *(int *)(param_1 + 0x54);
          iVar4 = 0x1700;
        }
        else {
          iVar1 = *(int *)(param_1 + 0x54);
          iVar4 = DAT_080413b0;
        }
        *param_2 = iVar1 + iVar4;
        iVar1 = *(int *)(param_1 + 0x58);
        iVar4 = DAT_080413c8;
        goto LAB_080413c2;
      }
    }
    else if (uVar3 == DAT_08041340) {
      if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
        iVar1 = *(int *)(param_1 + 0x54);
        iVar4 = DAT_08041370;
      }
      else {
        iVar1 = *(int *)(param_1 + 0x54);
        iVar4 = 0x1700;
      }
      *param_2 = iVar1 + iVar4;
      iVar1 = *(int *)(param_1 + 0x58);
      iVar4 = DAT_08041374;
      goto LAB_080413c2;
    }
    uVar2 = 1;
  }
  return CONCAT44(in_lr,uVar2);
}


