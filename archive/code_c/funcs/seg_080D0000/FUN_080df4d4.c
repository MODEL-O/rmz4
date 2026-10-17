// undefined FUN_080df4d4(void)
// entry 0x80df4d4


undefined4 FUN_080df4d4(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  undefined4 local_1c;
  int local_18;
  
  if (*(char *)(param_1 + 0x11) == '\0') {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + DAT_080df524;
    FUN_080d0c88(2,&local_1c);
    FUN_080df2ec(&local_1c,*(undefined1 *)(param_1 + 0x10),2,*(byte *)(param_1 + 10) >> 4 & 1,
                 *(undefined1 *)(param_1 + 0x74));
    FUN_080df2ec(&local_1c,*(undefined1 *)(param_1 + 0x10),5,*(byte *)(param_1 + 10) >> 4 & 1,
                 *(undefined1 *)(param_1 + 0x74));
  }
  else if (*(char *)(param_1 + 0x11) == '\x01') {
    local_1c = *(undefined4 *)(param_1 + 0x54);
    local_18 = *(int *)(param_1 + 0x58) + DAT_080df578;
    FUN_080d0c88(1,&local_1c);
    FUN_08002b10(0x2a);
    FUN_080df2ec(param_1 + 0x54,*(undefined1 *)(param_1 + 0x10),4,*(byte *)(param_1 + 10) >> 4 & 1,
                 *(undefined1 *)(param_1 + 0x74));
    FUN_080df2ec(param_1 + 0x54,*(undefined1 *)(param_1 + 0x10),3,*(byte *)(param_1 + 10) >> 4 & 1,
                 *(undefined1 *)(param_1 + 0x74));
  }
  else {
    FUN_080d0c88(3,param_1 + 0x54);
  }
  piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080df5a0);
  *(undefined4 *)(param_1 + 0xc) = 4;
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0x10);
  return in_lr;
}


