// undefined FUN_080f419c(void)
// entry 0x80f419c


undefined4 FUN_080f419c(int param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 in_lr;
  
  puVar2 = (uint *)(param_1 + 0x8c);
  if ((*puVar2 & 0x200) != 0) {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080f4210);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    if ((*puVar2 & 0x20000) != 0) {
      *(char *)(param_1 + 0x10) = *(char *)(param_1 + 0x10) + '\x03';
    }
    *puVar2 = 0;
    *(undefined4 *)(param_1 + 0x90) = 0;
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfb;
    *(byte *)(DAT_080f4214 + DAT_080f4218) =
         (byte)(1 << *(sbyte *)(param_1 + 0x11)) | *(byte *)(DAT_080f4214 + DAT_080f4218);
    FUN_080f3f1c(param_1);
  }
  FUN_0801cff0(param_1);
  return in_lr;
}


