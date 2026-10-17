// undefined FUN_0808a78c(void)
// entry 0x808a78c


undefined4 FUN_0808a78c(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined4 in_lr;
  
  bVar1 = *(byte *)(param_1 + 0xe);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined1 *)(param_1 + 0xc0) = 0;
        FUN_0801cf00(param_1,DAT_0808a88c);
        FUN_08005784(param_1 + 0x74,(uint)DAT_0808a890[7] * 0x18 + DAT_0808a894);
        *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x2a00;
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 0x5c) = 0;
        *(undefined1 *)(param_1 + 0x12) = 0xc;
        *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + *(int *)(param_1 + 0x60);
      iVar3 = *(int *)(param_1 + 0x60) + 0x40;
      *(int *)(param_1 + 0x60) = iVar3;
      if (0x700 < iVar3) {
        *(undefined4 *)(param_1 + 0x60) = 0x700;
      }
      FUN_0801cff0(param_1);
      cVar2 = *(char *)(param_1 + 0x12) + -1;
      *(char *)(param_1 + 0x12) = cVar2;
      if (cVar2 != '\0') {
        return in_lr;
      }
      FUN_08005784(param_1 + 0x74,(uint)*DAT_0808a890 * 0x18 + DAT_0808a894);
      *(undefined1 *)(param_1 + 0xd) = 6;
      *(undefined1 *)(param_1 + 0xe) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    FUN_0801cf00(param_1,DAT_0808a7f0);
    FUN_08005784(param_1 + 0x74,(uint)*(byte *)(DAT_0808a7f4 + 1) * 0x18 + DAT_0808a7f8);
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined1 *)(param_1 + 0x12) = 0x10;
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  FUN_0801cff0(param_1);
  cVar2 = *(char *)(param_1 + 0x12) + -1;
  *(char *)(param_1 + 0x12) = cVar2;
  if (cVar2 == '\0') {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
  }
  return in_lr;
}


