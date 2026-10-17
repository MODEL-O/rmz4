// undefined FUN_080776ac(void)
// entry 0x80776ac


undefined4 FUN_080776ac(int param_1)

{
  byte bVar1;
  undefined4 in_lr;
  
  if (*(char *)(param_1 + 0xf) == '\0') {
    FUN_08078fdc(param_1,0);
    *(char *)(param_1 + 0xf) = *(char *)(param_1 + 0xf) + '\x01';
  }
  FUN_0801cff0(param_1);
  FUN_08005784(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(ushort *)((uint)*(byte *)(param_1 + 0xc4) * 2 + DAT_0807771c) * 4 +
                        DAT_08077718)));
  FUN_08078f28(param_1);
  bVar1 = *(byte *)(DAT_08077720 + 0x12);
  if ((bVar1 & 1) == 0) {
    *(char *)(param_1 + 0xe) = *(char *)(param_1 + 0xe) + '\x01';
    *(byte *)(param_1 + 0xf) = bVar1 & 1;
  }
  return in_lr;
}


