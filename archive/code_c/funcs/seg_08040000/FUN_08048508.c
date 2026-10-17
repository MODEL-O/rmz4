// undefined FUN_08048508(void)
// entry 0x8048508


undefined4 FUN_08048508(int param_1)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  byte bVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0804857c);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_0801cc9c(param_1);
  FUN_0801ceec(param_1);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 3;
  FUN_0801cf00(param_1,*(undefined2 *)((uint)*(byte *)(param_1 + 0x11) * 2 + DAT_08048580));
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 4;
  FUN_08005760(param_1 + 0x74,DAT_08048584,param_1 + 0x54,8);
  *(int *)(param_1 + 0xa0) = param_1;
  *(undefined4 *)(param_1 + 0x98) = 0;
  bVar4 = *(byte *)((uint)*(byte *)(param_1 + 0x11) + DAT_08048588);
  if (bVar4 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xef;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x10;
  }
  *(byte *)(param_1 + 10) = bVar2;
  bVar4 = bVar4 & 1;
  *(byte *)(param_1 + 0x4c) = bVar4;
  pbVar5 = (byte *)(param_1 + 0x4a);
  *pbVar5 = *pbVar5 & 0xef | bVar4 << 4;
  bVar4 = *(byte *)((uint)*(byte *)(param_1 + 0x11) + DAT_080485c8);
  if (bVar4 == 0) {
    bVar2 = *(byte *)(param_1 + 10) & 0xdf;
  }
  else {
    bVar2 = *(byte *)(param_1 + 10) | 0x20;
  }
  *(byte *)(param_1 + 10) = bVar2;
  bVar4 = bVar4 & 1;
  *(byte *)(param_1 + 0x4d) = bVar4;
  *pbVar5 = *pbVar5 & 0xdf | bVar4 << 5;
  iVar1 = DAT_0804862c;
  *(int *)(param_1 + 0x5c) =
       (int)*(short *)(((uint)*(byte *)(param_1 + 0x11) * 0x20000000 + 0x40000000 >> 0x17) +
                      DAT_0804862c) << 2;
  *(int *)(param_1 + 0x60) = (int)*(short *)((*(byte *)(param_1 + 0x11) & 7) * 0x40 + iVar1) << 2;
  *(undefined1 *)(param_1 + 0x12) = 0xc0;
  *(undefined1 *)(param_1 + 0xbd) = 1;
  FUN_08048410(param_1);
  return in_lr;
}


