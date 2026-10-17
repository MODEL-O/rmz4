// undefined FUN_080d94b0(void)
// entry 0x80d94b0


undefined4 FUN_080d94b0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *DAT_080d94f8;
  if ((*(char *)(iVar2 + 0xfa) == '\x02') ||
     ((*(char *)(iVar2 + 0xf8) != '\x02' && (*(char *)(iVar2 + 0xf9) != '\x02')))) {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080d94fc);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
  else {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_080d9514));
  }
  return in_lr;
}


