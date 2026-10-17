// undefined FUN_080115d0(void)
// entry 0x80115d0


undefined4 FUN_080115d0(int param_1)

{
  undefined4 in_lr;
  
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x12) = 8;
  *(undefined2 *)(DAT_080115f8 + 2) = 0x1000;
  FUN_08002b10(0x76);
  *(char *)(DAT_080115fc + DAT_08011600) = *(char *)(DAT_080115fc + DAT_08011600) + '\x01';
  return in_lr;
}


