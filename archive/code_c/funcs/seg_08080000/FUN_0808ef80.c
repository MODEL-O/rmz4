// undefined FUN_0808ef80(void)
// entry 0x808ef80


undefined4 FUN_0808ef80(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  byte bVar4;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_0801cf00(param_1,DAT_0808efa4);
    bVar1 = *(byte *)(param_1 + 10);
    bVar4 = ~(bVar1 >> 4) & 1;
    if (bVar4 == 0) {
      bVar1 = bVar1 & 0xef;
    }
    else {
      bVar1 = bVar1 | 0x10;
    }
    *(byte *)(param_1 + 10) = bVar1;
    *(byte *)(param_1 + 0x4c) = bVar4;
    *(byte *)(param_1 + 0x4a) = *(byte *)(param_1 + 0x4a) & 0xef | bVar4 << 4;
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  bVar1 = *(byte *)(param_1 + 10);
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               (uint)**(byte **)(*(char *)(param_1 + 0x71) * 4 +
                                *(int *)(((uint)CONCAT11(*(undefined1 *)(param_1 + 0x1e),
                                                         *(undefined1 *)(param_1 + 0x70)) +
                                         DAT_0808f068) * 4 + DAT_0808f064)) * 0x18 + DAT_0808f06c);
  iVar3 = FUN_0808faf4(param_1);
  if ((iVar3 == 0) && (*(char *)(param_1 + 0x73) == '\x03')) {
    FUN_0808fddc(param_1);
    iVar3 = ((bVar1 >> 4 & 1) * 2 + -1) * 0x2000;
    if ((*(byte *)(param_1 + 10) & 0x10) == 0) {
      iVar3 = iVar3 + DAT_0808f0b0;
    }
    else {
      iVar3 = iVar3 + 0x400;
    }
    if ((*(int *)(*DAT_0808f070 + 0x54) - (*(int *)(param_1 + 0x54) + iVar3)) + 0x2000U < 0x4001) {
      if ((*(int *)(*DAT_0808f0b4 + 0x58) - *(int *)(param_1 + 0x58)) + 0x3200U < 0x8001) {
        if (*(int *)(*DAT_0808f0b4 + 0x58) + DAT_0808f0b8 < *(int *)(param_1 + 0x58)) {
          uVar2 = 2;
        }
        else {
          uVar2 = 3;
        }
        *(undefined1 *)(param_1 + 0xd) = uVar2;
        *(undefined1 *)(param_1 + 0xe) = 0;
        *(undefined1 *)(param_1 + 0xf) = 0;
        return in_lr;
      }
    }
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  return in_lr;
}


