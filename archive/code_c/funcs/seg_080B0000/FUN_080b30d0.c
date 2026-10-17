// undefined FUN_080b30d0(void)
// entry 0x80b30d0


undefined4 FUN_080b30d0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 in_lr;
  
  iVar2 = *(int *)(param_1 + 0x2c);
  if ((iVar2 != 0) && (*(byte *)(iVar2 + 0xc) < 2)) {
    if (*(char *)(iVar2 + 8) == '\x03') {
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
      *(undefined4 *)(iVar2 + 0x90) = 0;
      *(undefined1 *)(iVar2 + 0x94) = 0;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
      piVar1 = (int *)((uint)*(byte *)(iVar2 + 9) * 4 + DAT_080b3118);
      *(undefined4 *)(iVar2 + 0xc) = 3;
    }
    else {
      if (*(char *)(iVar2 + 8) != '\x06') goto LAB_080b3156;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfc;
      *(undefined4 *)(iVar2 + 0x8c) = 0;
      *(undefined4 *)(iVar2 + 0x90) = 0;
      *(undefined1 *)(iVar2 + 0x94) = 0;
      *(byte *)(iVar2 + 10) = *(byte *)(iVar2 + 10) & 0xfb;
      piVar1 = (int *)((uint)*(byte *)(iVar2 + 9) * 4 + DAT_080b3164);
      *(undefined4 *)(iVar2 + 0xc) = 3;
    }
    *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(*piVar1 + 0xc);
  }
LAB_080b3156:
  FUN_0807f8ec(param_1);
  return in_lr;
}


