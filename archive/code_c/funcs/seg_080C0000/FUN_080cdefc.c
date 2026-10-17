// undefined FUN_080cdefc(void)
// entry 0x80cdefc


undefined4 FUN_080cdefc(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  byte bVar5;
  byte *pbVar6;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_080cdf3c));
  FUN_0801cff0(param_1);
  bVar5 = *(byte *)((uint)*(byte *)(param_1 + 0x11) + DAT_080cdf40);
  if (bVar5 == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar3;
  bVar5 = bVar5 & 1;
  *(byte *)(param_1 + 0x4c) = bVar5;
  pbVar6 = (byte *)(param_1 + 0x4a);
  *pbVar6 = *pbVar6 & 0xef | bVar5 << 4;
  bVar5 = *(byte *)((uint)*(byte *)(param_1 + 0x11) + DAT_080cdf7c);
  if (bVar5 == 0) {
    bVar3 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar3 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar3;
  bVar5 = bVar5 & 1;
  *(byte *)(param_1 + 0x4d) = bVar5;
  *pbVar6 = *pbVar6 & 0xdf | bVar5 << 5;
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,
               (uint)*(byte *)((uint)*(byte *)(param_1 + 0x11) + DAT_080ce028) * 0x18 + DAT_080ce02c
               ,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  iVar2 = DAT_080ce034;
  iVar1 = DAT_080ce030;
  *(int *)(param_1 + 0x5c) =
       *(short *)((*(byte *)((uint)*(byte *)(param_1 + 0x11) + DAT_080ce034) + 0x40 & 0xff) * 2 +
                 DAT_080ce030) * 5 >> 1;
  *(int *)(param_1 + 0x60) =
       *(short *)((uint)*(byte *)((uint)*(byte *)(param_1 + 0x11) + iVar2) * 2 + iVar1) * 5 >> 1;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  piVar4 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080ce038);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar4 + 4);
  FUN_080cde10(param_1);
  return in_lr;
}


