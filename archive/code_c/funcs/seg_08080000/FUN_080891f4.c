// undefined FUN_080891f4(void)
// entry 0x80891f4


undefined4 FUN_080891f4(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 0x200) == 0) {
    iVar2 = FUN_0807f90c(param_1);
    if ((iVar2 != 0) && (*(int *)(param_1 + 0xbc) == 0)) {
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0808928c));
    FUN_08089e58(param_1);
    FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08089290));
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_08089238);
    uVar3 = 2;
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    if ((*(char *)(param_1 + 0xc1) == '\0') &&
       (uVar3 = 0, (*(uint *)(param_1 + 0x8c) & 0x10000) != 0)) {
      *(undefined1 *)(param_1 + 0xd) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0xd) = uVar3;
    }
    FUN_08089294(param_1);
  }
  return in_lr;
}


