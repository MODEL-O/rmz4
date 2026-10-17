// undefined FUN_08126988(void)
// entry 0x8126988


undefined8 FUN_08126988(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  piVar1 = (int *)(param_1 + DAT_0812699c);
  if (piVar1[5] == 0) {
    *(undefined1 *)(*piVar1 + 0x254) = 1;
    *(char *)(piVar1 + 6) = (char)piVar1[6] + '\x01';
    *(undefined1 *)((int)piVar1 + 0x19) = 0;
  }
  else {
    piVar1[5] = piVar1[5] + -1;
  }
  return CONCAT44(in_lr,1);
}


