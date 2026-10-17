// undefined FUN_0803268c(void)
// entry 0x803268c


undefined4 FUN_0803268c(int param_1)

{
  undefined4 in_lr;
  
  if (*(char *)(param_1 + DAT_080326a8) == '\0') {
    *(char *)(param_1 + DAT_080326a8) = '\x01';
    *(ushort *)(DAT_08032700 + 8) = (ushort)DAT_08032704 & *(ushort *)(DAT_08032700 + 8) | 8;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    FUN_08002b10(10);
    if ((*(byte *)(param_1 + 10) >> 4 & 1) == (*(byte *)(param_1 + 0x142) & 1)) {
      FUN_0801cf00(param_1,0x4a00);
    }
    else {
      FUN_0801cf00(param_1,0x4b00);
    }
    *(undefined1 *)(param_1 + 0xf) = 1;
    FUN_08032724(param_1);
  }
  else {
    FUN_080327c0(param_1);
    *(undefined1 *)(param_1 + 0xf) = 3;
  }
  return in_lr;
}


