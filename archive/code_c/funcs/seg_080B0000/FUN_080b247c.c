// undefined FUN_080b247c(void)
// entry 0x80b247c


undefined4 FUN_080b247c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 in_lr;
  
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar3 = *(int *)(param_1 + 0x2c);
    if (*(char *)(iVar3 + 0x10) == '\0') {
      if (*(byte *)(iVar3 + 0x11) < 2) {
        FUN_08006984(0x21);
      }
      else {
        FUN_08006984(0x22);
      }
      if (((*(uint *)(param_1 + 0x14) & 0x200) != 0) && ((*(uint *)(param_1 + 0x14) & 0x20000) != 0)
         ) {
        *(undefined1 *)(iVar3 + 0xb4) = 1;
        iVar2 = *DAT_080b24e0;
        if (iVar2 != 0) {
          if (*(byte *)(iVar3 + 0x11) < 2) {
            FUN_0803a578(iVar2,5,0xb);
          }
          else {
            FUN_0803a578(iVar2,6,8);
          }
        }
      }
    }
    else if ((*(uint *)(param_1 + 0x14) & 4) != 0) {
      *(undefined1 *)(iVar3 + 0xb8) = 0;
      *(undefined1 *)(iVar3 + 0xb9) = 0;
      FUN_080b29b8(iVar3);
      FUN_08002b10(0x35);
      piVar1 = (int *)((uint)*(byte *)(iVar3 + 9) * 4 + DAT_080b2528);
      *(undefined4 *)(iVar3 + 0xc) = 2;
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(*piVar1 + 8);
    }
  }
  return in_lr;
}


