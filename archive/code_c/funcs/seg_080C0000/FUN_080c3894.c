// undefined FUN_080c3894(void)
// entry 0x80c3894


undefined4 FUN_080c3894(int param_1)

{
  byte bVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 in_lr;
  
  iVar4 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0xd) == '\0') {
    if (1 < *(byte *)(iVar4 + 0xc)) {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    FUN_0801cff0(param_1);
    *(byte *)(param_1 + 0xb6) = *(byte *)(param_1 + 0xb5);
    pbVar3 = (byte *)(param_1 + 0xb4);
    *(byte *)(param_1 + 0xb5) = *pbVar3;
    bVar1 = *(byte *)(iVar4 + 0xb6);
    *pbVar3 = bVar1;
    iVar4 = DAT_080c3948;
    if (bVar1 != 0) {
      *(int *)(param_1 + 0x54) =
           *(int *)(param_1 + 0x54) +
           (*(short *)((uint)(byte)(bVar1 + 0x40) * 2 + DAT_080c3948) * 7 >> 1);
      *(int *)(param_1 + 0x58) =
           *(int *)(param_1 + 0x58) + (*(short *)((uint)*pbVar3 * 2 + iVar4) * 7 >> 1);
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080c38d8);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


