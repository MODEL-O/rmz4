// undefined FUN_0803db6c(void)
// entry 0x803db6c


undefined4 FUN_0803db6c(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  cVar1 = FUN_0803dc14();
  if ((cVar1 == '\0') && (*(byte *)(*(int *)(param_1 + 0xb4) + 0xc) < 2)) {
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x10) * 4 + DAT_0803dbe0));
    FUN_0801cff0(param_1);
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0803dbc0);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


