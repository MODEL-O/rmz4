// undefined FUN_080c805c(void)
// entry 0x80c805c


undefined4 FUN_080c805c(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_lr;
  
  iVar6 = *(int *)(param_1 + 0x28);
  uVar4 = *(byte *)(param_1 + 10) >> 4 & 1;
  if (*(char *)(param_1 + 0xf) == '\0') {
    uVar2 = *(undefined4 *)(iVar6 + 0x58);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar6 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = uVar2;
    *(uint *)(param_1 + 0x5c) = (uVar4 * 2 + -1) * 0x1c0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0xb5) + -1;
    *(undefined1 *)(param_1 + 0xf) = 1;
  }
  FUN_0801cff0(param_1);
  iVar3 = *(int *)(param_1 + 100) + *(int *)(param_1 + 0x5c);
  *(int *)(param_1 + 100) = iVar3;
  *(int *)(param_1 + 0x54) = *(int *)(iVar6 + 0x54) + iVar3;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar6 + 0x58);
  uVar5 = (uint)(byte)(~*(byte *)(param_1 + 0x12) + *(char *)(param_1 + 0xb5));
  iVar6 = iVar3 * (uVar4 * 2 + -1) + DAT_080c80f0;
  if (iVar6 < 0) {
    iVar6 = iVar6 + DAT_080c80f4;
  }
  if ((int)uVar5 < iVar6 >> 0xc) {
    if (*(byte *)(param_1 + 0x12) == 0) {
      bVar1 = true;
    }
    else {
      iVar6 = FUN_080c7e38(param_1,uVar5);
      if (iVar6 != 0) {
        *(char *)(param_1 + 0xb4) = *(char *)(param_1 + 0xb4) + '\x01';
      }
      bVar1 = iVar6 == 0;
      *(char *)(param_1 + 0x12) = *(char *)(param_1 + 0x12) + -1;
    }
    if (bVar1) {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


