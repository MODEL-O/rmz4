// undefined FUN_080a986c(void)
// entry 0x80a986c


undefined4 FUN_080a986c(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    if (*(char *)(param_1 + 0xb7) == '\0') {
      FUN_080aa064(param_1);
      if (*(int *)(param_1 + 0xc0) == 0) {
        if (*(char *)(param_1 + 0xb6) == '\x01') {
          FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080a98d4));
        }
      }
      else {
        FUN_080aa0ec(param_1);
        FUN_080aa03c(param_1);
      }
      if ((*(char *)(param_1 + 0xb6) == '\0') && (cVar1 = FUN_080a9c10(param_1), cVar1 == '\x01')) {
        *(char *)(param_1 + 0xb6) = '\x01';
        *(undefined1 *)(param_1 + 0xd) = 4;
        *(undefined1 *)(param_1 + 0xe) = 0;
      }
    }
    else {
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_080a9924));
    }
    FUN_0801cff0(param_1);
  }
  else {
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080a9898);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 8);
    FUN_080a9928(param_1);
  }
  return in_lr;
}


