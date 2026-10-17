// undefined FUN_080890c8(void)
// entry 0x80890c8


undefined4 FUN_080890c8(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  pbVar6 = (byte *)(param_1 + 0xc0);
  *pbVar6 = 0;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  iVar1 = DAT_0808915c;
  iVar4 = DAT_08089158;
  FUN_08005760(param_1 + 0x74,(uint)*(byte *)((uint)*pbVar6 + DAT_08089158) * 0x18 + DAT_0808915c,
               param_1 + 0x54,10);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  FUN_08005784(param_1 + 0x74,(uint)*(byte *)((uint)*pbVar6 + iVar4) * 0x18 + iVar1);
  *(undefined4 *)(param_1 + 0x98) = DAT_08089160;
  *(undefined4 *)(param_1 + 0xb8) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  if (*(byte *)(param_1 + 0x11) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  bVar2 = *(byte *)(param_1 + 0x11) & 1;
  *(byte *)(param_1 + 0x4c) = bVar2;
  *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar2 << 4;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  uVar3 = FUN_0800864c(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = uVar3;
  iVar4 = FUN_0807f90c(param_1);
  if (iVar4 != 0) {
    FUN_0801cf00(param_1,*(byte *)(param_1 + 0xc0) | 0x1f00);
    FUN_0801cff0(param_1);
  }
  piVar5 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080891f0);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar5 + 4);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  FUN_080891f4(param_1);
  return in_lr;
}


