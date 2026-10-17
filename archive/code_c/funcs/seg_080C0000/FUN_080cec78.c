// undefined FUN_080cec78(void)
// entry 0x80cec78


undefined4 FUN_080cec78(int param_1)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 in_lr;
  byte abStack_28 [4];
  char acStack_24 [8];
  
  FUN_08129258(abStack_28,DAT_080ced90,3);
  FUN_08129258(acStack_24,DAT_080ced94,8);
  pbVar5 = (byte *)(param_1 + 0xb4);
  bVar1 = *pbVar5;
  bVar2 = *(byte *)(param_1 + 0x10);
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,0x100,0);
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ced98);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  if (*(char *)(param_1 + 0x11) == '\0') {
    FUN_080cec18(param_1 + 0x54,(uint)*(byte *)(param_1 + 0x10) << 8 | 1,*pbVar5);
    FUN_080cec18(param_1 + 0x54,(uint)*(byte *)(param_1 + 0x10) << 8 | 2,*pbVar5);
  }
  iVar4 = DAT_080ced9c;
  abStack_28[*(byte *)(param_1 + 0x11)] =
       acStack_24[(uint)bVar1 * 4 + (uint)bVar2 & 0xff] + abStack_28[*(byte *)(param_1 + 0x11)];
  *(int *)(param_1 + 0x5c) =
       *(short *)((abStack_28[*(byte *)(param_1 + 0x11)] + 0x40 & 0xff) * 2 + DAT_080ced9c) * 3;
  iVar4 = (int)*(short *)((uint)abStack_28[*(byte *)(param_1 + 0x11)] * 2 + iVar4);
  *(int *)(param_1 + 0x60) = iVar4 * 3;
  iVar4 = iVar4 * -0x300;
  if (iVar4 < 0) {
    iVar4 = iVar4 + 0xff;
  }
  *(int *)(param_1 + 0x60) = iVar4 >> 8;
  *(undefined1 *)(param_1 + 0x12) = 0xb4;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_080ceda0,param_1 + 0x54,0xff);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_080ceda4(param_1);
  return in_lr;
}


