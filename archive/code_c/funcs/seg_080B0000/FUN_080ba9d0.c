// undefined FUN_080ba9d0(void)
// entry 0x80ba9d0


undefined4 FUN_080ba9d0(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  int local_10;
  int local_c;
  
  bVar1 = *(byte *)(param_1 + 0xf);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        FUN_0801cf00(param_1,DAT_080baa8c);
        *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
      }
      else if (bVar1 != 3) {
        return in_lr;
      }
      FUN_0801cff0(param_1);
      if (*(char *)(param_1 + 0x73) != '\x03') {
        return in_lr;
      }
      *(undefined1 *)(param_1 + 0xd) = 5;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      return in_lr;
    }
    if (bVar1 != 0) {
      return in_lr;
    }
    *(undefined1 *)(param_1 + 0xb4) = 0;
    local_10 = *(int *)(param_1 + 0x54) + ((*(byte *)(param_1 + 10) >> 4 & 1) * 2 + -1) * 0x800;
    local_c = *(int *)(param_1 + 0x58) + DAT_080baa50;
    FUN_080bac90(param_1,&local_10,0,0);
    FUN_08005784(param_1 + 0x74,DAT_080baa54);
    FUN_0801cf00(param_1,DAT_080baa58);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  if (*(char *)(param_1 + 0xb4) == '\0') {
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  return in_lr;
}


