// undefined FUN_080ae77c(void)
// entry 0x80ae77c


undefined4 FUN_080ae77c(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  if (*(char *)(param_1 + 0x10) == '\0') {
    FUN_0801cf00(param_1,0xd500);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080ae7f0,param_1 + 0x54,0x12);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    iVar3 = DAT_080ae7f8;
    iVar2 = DAT_080ae7f4;
    *(int *)(param_1 + 0x5c) =
         *(short *)((*(byte *)((uint)*(byte *)(param_1 + 0x11) + DAT_080ae7f8) + 0x40 & 0xff) * 2 +
                   DAT_080ae7f4) * 5 >> 2;
    sVar1 = *(short *)((uint)*(byte *)((uint)*(byte *)(param_1 + 0x11) + iVar3) * 2 + iVar2);
  }
  else {
    FUN_0801cf00(param_1,DAT_080ae898);
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
    FUN_08005760(param_1 + 0x74,DAT_080ae89c,param_1 + 0x54,9);
    *(int *)(param_1 + 0xa0) = param_1;
    *(undefined4 *)(param_1 + 0x98) = 0;
    iVar2 = DAT_080ae8a0;
    *(int *)(param_1 + 0x5c) =
         *(short *)((*(byte *)(param_1 + 0x11) + 0x40 & 0xff) * 2 + DAT_080ae8a0) * 5 >> 2;
    sVar1 = *(short *)((uint)*(byte *)(param_1 + 0x11) * 2 + iVar2);
  }
  *(int *)(param_1 + 0x60) = sVar1 * 5 >> 2;
  FUN_0801cff0(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  *(undefined1 *)(param_1 + 0x4c) = 0;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef;
  *(undefined4 *)(param_1 + 0x98) = DAT_080ae8a4;
  *(undefined1 *)(param_1 + 0x12) = 2;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ae8a8);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  FUN_080ae8ac(param_1);
  return in_lr;
}


