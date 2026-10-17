// undefined FUN_0807bb78(void)
// entry 0x807bb78


undefined4 FUN_0807bb78(int param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0807e8c8(param_1,7);
    bVar1 = *(byte *)(param_1 + 0xbe);
    uVar3 = bVar1 & 1;
    *(char *)(param_1 + 0x4c) = (char)uVar3;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | (byte)(uVar3 << 4);
    if ((bVar1 & 1) == 0) {
      bVar2 = *(byte *)(param_1 + 10) & 0xef;
    }
    else {
      bVar2 = *(byte *)(param_1 + 10) | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar2;
    uVar3 = bVar1 + 1 & 1;
    iVar5 = uVar3 * 2 + -1;
    iVar4 = *(int *)(param_1 + 200) + iVar5 * -0x2000;
    *(int *)(param_1 + 0x54) = iVar4;
    *(int *)(param_1 + 0x5c) = iVar5 * 0x200;
    *(int *)(param_1 + 100) = iVar5 * -0x20;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(int *)(param_1 + 0x60) = iVar4;
    *(char *)(param_1 + 0x13) = (char)uVar3;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 0x13);
  if (*(byte *)(param_1 + 0xbc) != 0) {
    FUN_0801cff0(param_1);
  }
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xbc) * 2 + DAT_0807bc8c) * 4 +
                        DAT_0807bc88)));
  iVar5 = *(int *)(param_1 + 0x5c);
  iVar6 = *(int *)(param_1 + 0x54) + iVar5;
  *(int *)(param_1 + 0x54) = iVar6;
  iVar7 = *(int *)(param_1 + 100);
  iVar4 = FUN_08128fb8(*(int *)(param_1 + 0x68) - iVar5,iVar7);
  iVar4 = ((uint)bVar1 * 2 + -1) *
          (((iVar5 * 2 + iVar7 * iVar4) * (iVar4 + 1) >> 1) + (iVar6 - *(int *)(param_1 + 0x60)));
  if (iVar4 - DAT_0807bc90 != 0 && DAT_0807bc90 <= iVar4) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


