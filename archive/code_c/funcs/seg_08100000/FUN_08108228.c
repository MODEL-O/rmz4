// undefined FUN_08108228(void)
// entry 0x8108228


undefined4 FUN_08108228(int param_1)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  undefined4 in_lr;
  
  FUN_0801cc9c();
  bVar4 = *(byte *)(param_1 + 10);
  *(byte *)(param_1 + 10) = bVar4 | 3;
  bVar2 = *(byte *)(param_1 + 0x11) & 1;
  if ((*(byte *)(param_1 + 0x11) & 1) == 0) {
    bVar4 = bVar4 & 0xef | 3;
  }
  else {
    bVar4 = bVar4 | 0x13;
  }
  *(byte *)(param_1 + 10) = bVar4;
  *(byte *)(param_1 + 0x4c) = bVar2;
  pbVar5 = (byte *)(param_1 + 0x4a);
  *pbVar5 = *pbVar5 & 0xef | bVar2 << 4;
  bVar4 = *(byte *)(param_1 + 0x11) >> 1;
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
  FUN_0801cf00(param_1,DAT_081082f0);
  iVar6 = *(int *)(param_1 + 0x58) + DAT_081082f4;
  *(int *)(param_1 + 0x58) = iVar6;
  iVar1 = DAT_081082f8;
  *(int *)(param_1 + 0x54) =
       *(int *)(param_1 + 0x54) +
       *(int *)((uint)*(byte *)(param_1 + 0x11) * 8 + DAT_081082f8) * 0x100;
  *(int *)(param_1 + 0x58) =
       iVar6 + *(int *)((uint)*(byte *)(param_1 + 0x11) * 8 + iVar1 + 4) * 0x100;
  piVar3 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_081082fc);
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar3 + 4);
  FUN_08108300(param_1);
  return in_lr;
}


