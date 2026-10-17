// undefined FUN_08082158(void)
// entry 0x8082158


undefined4 FUN_08082158(int param_1)

{
  bool bVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08082188);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)((uint)*(byte *)(param_1 + 0x10) + DAT_0808218c);
  if (*(byte *)(param_1 + 0x11) == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  bVar2 = *(byte *)(param_1 + 0x11) & 1;
  *(byte *)(param_1 + 0x4d) = bVar2;
  pbVar6 = (byte *)(param_1 + 0x4a);
  *pbVar6 = *pbVar6 & 0xdf | bVar2 << 5;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 2;
  FUN_0801cc9c(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 5;
  FUN_08005760(param_1 + 0x74,DAT_08082208,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = DAT_0808220c;
  FUN_0801cf00(param_1,0x1600);
  if ((*(byte *)(param_1 + 10) & 0x20) == 0) {
    iVar4 = FUN_08008534(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar5 = 0x100;
  }
  else {
    iVar4 = FUN_08008748(*(undefined4 *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58));
    iVar5 = DAT_0808223c;
  }
  *(int *)(param_1 + 0x58) = iVar4 + iVar5;
  bVar1 = 0 < *(int *)(*DAT_08082240 + 0x54) - *(int *)(param_1 + 0x54);
  if (bVar1) {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  *(byte *)(param_1 + 10) = bVar2;
  *(bool *)(param_1 + 0x4c) = bVar1;
  *pbVar6 = *pbVar6 & 0xef | bVar1 << 4;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x54);
  *(undefined1 *)(param_1 + 0xbf) = 0;
  *(undefined1 *)(param_1 + 0xbc) = 0;
  FUN_08082284(param_1);
  return in_lr;
}


