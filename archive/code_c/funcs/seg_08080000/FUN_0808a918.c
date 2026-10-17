// undefined FUN_0808a918(void)
// entry 0x808a918


undefined4 FUN_0808a918(int param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  undefined4 in_lr;
  int local_14;
  int local_10;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        return in_lr;
      }
      local_14 = *(int *)(param_1 + 0x54);
      local_10 = *(int *)(param_1 + 0x58);
      FUN_08002b10(0x138);
      uVar3 = (int)-(*(byte *)(param_1 + 10) & 0x10) >> 0x1f & 8;
      local_14 = *(int *)(uVar3 + DAT_0808a9e4) + local_14;
      local_10 = *(int *)(uVar3 + DAT_0808a9e4 + 4) + local_10;
      FUN_080be534(&local_14,*(byte *)(param_1 + 10) >> 4 & 1);
      cVar2 = '\0';
      *(undefined1 *)(param_1 + 0xd) = 0;
      goto LAB_0808a9d8;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0xc2) = 0;
    FUN_0801cf00(param_1,DAT_0808a980);
    FUN_08005784(param_1 + 0x74,(uint)*(byte *)(DAT_0808a984 + 9) * 0x18 + DAT_0808a988);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_0808b1a4(param_1);
  if (*(char *)(param_1 + 0x73) != '\x03') {
    return in_lr;
  }
  cVar2 = *(char *)(param_1 + 0xe) + '\x01';
LAB_0808a9d8:
  *(char *)(param_1 + 0xe) = cVar2;
  return in_lr;
}


