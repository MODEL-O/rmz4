// undefined FUN_0810c7e0(void)
// entry 0x810c7e0


undefined4 FUN_0810c7e0(int param_1)

{
  int *piVar1;
  undefined4 in_lr;
  
  if (*(char *)(*(int *)(param_1 + 0x28) + DAT_0810c80c + 5) == '\0') {
    if (*(char *)(*(int *)(param_1 + 0x28) + 3) == '\x03') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0810c838));
    }
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810c810);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    FUN_0810c83c(param_1);
  }
  return in_lr;
}


