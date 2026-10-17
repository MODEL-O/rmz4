// undefined FUN_08032edc(void)
// entry 0x8032edc


undefined4 FUN_08032edc(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + DAT_08032f08) == '\0') {
    if (CONCAT11(*(undefined1 *)(param_1 + 0x1e),*(undefined1 *)(param_1 + 0x70)) == 0x200) {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0xf) = 0;
      *(undefined4 *)(param_1 + 0x5c) = 0;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = 1;
      *(undefined1 *)(param_1 + 0xe) = 2;
      *(undefined1 *)(param_1 + 0xf) = 0;
    }
  }
  return in_lr;
}


