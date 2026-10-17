// undefined FUN_080130b0(void)
// entry 0x80130b0


undefined4 FUN_080130b0(int param_1)

{
  ushort uVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 in_lr;
  
  puVar2 = DAT_08013110;
  if (*(char *)(param_1 + 0xe) == '\0') {
    *DAT_08013110 = (short)DAT_08013114;
    *(undefined2 *)(param_1 + 0x10) = 0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
  }
  *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + 8;
  pbVar5 = (byte *)(DAT_08013118 + DAT_0801311c);
  if (*pbVar5 == 0) {
    puVar2[1] = 0x1000;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x10);
    uVar3 = uVar1 + 2;
    *(short *)(param_1 + 0x10) = (short)uVar3;
    uVar3 = uVar3 & 0xffff;
    if (uVar3 < 0x101) {
      iVar4 = ((int)((*(short *)((uVar1 + 0x42 & 0xff) * 2 + DAT_08013150) + 0x100 >> 5) +
                    (uint)*pbVar5 * 4) >> 2) + 2;
      *(int *)(param_1 + 0x68) = iVar4;
      uVar1 = (ushort)iVar4;
      puVar2[1] = uVar1 & 0x1f | (0x10 - uVar1) * 0x100;
    }
    else {
      uVar1 = (ushort)*(undefined4 *)(param_1 + 0x68);
      puVar2[1] = uVar1 & 0x1f | (0x10 - uVar1) * 0x100;
      if (0x200 < uVar3) {
        *(undefined2 *)(param_1 + 0x10) = 0;
      }
    }
  }
  return in_lr;
}


