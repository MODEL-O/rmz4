// undefined FUN_08080890(void)
// entry 0x8080890


undefined4 FUN_08080890(int param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x8c) & 1) != 0) {
    FUN_08006984(0x28);
  }
  if (*(char *)(param_1 + 0xb7) == '\0') {
    if ((*(char *)(param_1 + 0xb4) == '\0') &&
       (uVar2 = *(uint *)(param_1 + 0x8c), (uVar2 & 0x200) == 0)) {
      if ((uVar2 & 1) != 0) {
        if (*(int *)(param_1 + 0x2c) == 0) {
          uVar3 = FUN_0802adac(0,param_1,DAT_08080968);
          *(undefined4 *)(param_1 + 0x2c) = uVar3;
        }
        if (*(char *)(param_1 + 0xd) != '\x02') {
          *(undefined1 *)(param_1 + 0xd) = 2;
          *(undefined1 *)(param_1 + 0xe) = 0;
          *(undefined1 *)(param_1 + 0xf) = 0;
        }
      }
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_0808096c));
      FUN_08128f80(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0xd) * 4 + DAT_08080970));
      *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(*DAT_08080974 + 0x54);
      return in_lr;
    }
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0808090c);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  else {
    piVar1 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_080808d0);
    *(undefined4 *)(param_1 + 0xc) = 2;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    *(undefined1 *)(param_1 + 0xd) = 1;
    *(undefined1 *)(param_1 + 0xe) = 0;
    *(undefined1 *)(param_1 + 0xf) = 0;
  }
  FUN_08080fa0(param_1);
  return in_lr;
}


