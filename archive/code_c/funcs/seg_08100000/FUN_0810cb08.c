// undefined FUN_0810cb08(void)
// entry 0x810cb08


undefined4 FUN_0810cb08(int param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_lr;
  
  iVar3 = *(int *)(param_1 + 0x28) + DAT_0810cb38;
  if (*(char *)(iVar3 + 5) == '\0') {
    if (*(char *)(iVar3 + 0x13) == '\0') {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfe;
    }
    else {
      *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) | 1;
      FUN_0801cff0(param_1);
      bVar1 = *(byte *)(param_1 + 0x10);
      if (bVar1 == 1) {
        *(uint *)(param_1 + 0x54) = (*(byte *)(iVar3 + 0x13) + 0x40) * 0x100;
        iVar3 = 0x50 - (uint)*(byte *)(iVar3 + 0x14);
      }
      else if (bVar1 < 2) {
        if (bVar1 != 0) {
          return in_lr;
        }
        *(uint *)(param_1 + 0x54) = (0x40 - (uint)*(byte *)(iVar3 + 0x13)) * 0x100;
        iVar3 = 0x50 - (uint)*(byte *)(iVar3 + 0x14);
      }
      else {
        if (bVar1 == 2) {
          *(uint *)(param_1 + 0x54) = (0x40 - (uint)*(byte *)(iVar3 + 0x13)) * 0x100;
        }
        else {
          if (bVar1 != 3) {
            return in_lr;
          }
          *(uint *)(param_1 + 0x54) = (*(byte *)(iVar3 + 0x13) + 0x40) * 0x100;
        }
        iVar3 = *(byte *)(iVar3 + 0x14) + 0x50;
      }
      *(int *)(param_1 + 0x58) = iVar3 << 8;
    }
  }
  else {
    *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xfc;
    piVar2 = (int *)((uint)*(byte *)(param_1 + 9) * 4 + DAT_0810cb3c);
    *(undefined4 *)(param_1 + 0xc) = 3;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*piVar2 + 0xc);
  }
  return in_lr;
}


