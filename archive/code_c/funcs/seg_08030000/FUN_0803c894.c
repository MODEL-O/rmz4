// undefined FUN_0803c894(void)
// entry 0x803c894


undefined4 FUN_0803c894(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  FUN_0801cff0();
  FUN_08005794(param_1 + 0x74,
               *(undefined4 *)
                (*(char *)(param_1 + 0x71) * 4 +
                *(int *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0803c8f8)),
               *(undefined1 *)(param_1 + 0xc1),*(undefined1 *)(param_1 + 0xc0),
               *(undefined1 *)(param_1 + 0xc2),0xffffffff);
  if (*(char *)(param_1 + 0x73) == '\x03') {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803c8fc);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
  }
  return in_lr;
}


