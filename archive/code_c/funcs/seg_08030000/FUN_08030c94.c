// undefined FUN_08030c94(void)
// entry 0x8030c94


undefined4 FUN_08030c94(int param_1)

{
  undefined4 uVar1;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 600) & 4) != 0) {
    *(undefined1 *)(param_1 + 0x13a) = 0x1c;
    *(undefined1 *)(param_1 + DAT_08030d00) = 0;
    FUN_0801cf00(param_1,0x300);
    FUN_080d1bcc(param_1 + 0x54,0,*(byte *)(param_1 + 10) >> 4 & 1);
    if (*(int *)(param_1 + 0x108) == 0) {
      uVar1 = FUN_080d2690(param_1);
      *(undefined4 *)(param_1 + 0x108) = uVar1;
    }
    FUN_08002b10(8);
  }
  *(undefined1 *)(param_1 + 0xf) = 1;
  FUN_08030d04(param_1);
  return in_lr;
}


