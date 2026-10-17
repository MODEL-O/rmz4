// undefined FUN_080e325c(void)
// entry 0x80e325c


undefined4 FUN_080e325c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_14 = *(int *)(param_1 + 0x54);
    local_10 = *(int *)(param_1 + 0x58) + DAT_080e3290;
    if (*(int *)(*DAT_080e3294 + 0x54) < local_14) {
      FUN_080d0dc4(0,&local_14,0x200,0);
    }
    else {
      FUN_080d0dc4(0,&local_14,0x200,1);
    }
    FUN_0801cf00(param_1,DAT_080e3360);
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x1e;
    FUN_080e3110(param_1 + 0x54,0,1);
    *(undefined1 *)(param_1 + 0x25) = 0x18;
  }
  if (*(char *)(param_1 + 0x11) == '\x01') {
    FUN_0801cf00(param_1,DAT_080e3364);
    iVar3 = DAT_080e3368;
    sVar1 = FUN_08128fb8((int)*(short *)(DAT_080e3368 + 0x1ca),0x14);
    *(int *)(param_1 + 100) = (int)sVar1;
    uVar2 = FUN_08128fb8(*(short *)(iVar3 + 0x14a) * -0x100,0x1400);
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    *(undefined1 *)(param_1 + 0x12) = 0xff;
  }
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if (*(int *)(param_1 + 0x54) < *(int *)(*DAT_080e336c + 0x54)) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 0x10;
    *(undefined1 *)(param_1 + 0x4c) = 1;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | 0x10;
    iVar3 = *(int *)(param_1 + 100) * -0x100;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xff;
    }
    *(int *)(param_1 + 100) = iVar3 >> 8;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  return in_lr;
}


