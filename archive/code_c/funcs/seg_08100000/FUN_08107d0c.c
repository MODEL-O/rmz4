// undefined FUN_08107d0c(void)
// entry 0x8107d0c


undefined4 FUN_08107d0c(int param_1)

{
  byte bVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 in_lr;
  
  iVar5 = DAT_08107e04;
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    iVar7 = *(int *)(*(int *)(param_1 + 0xc) + 0x2c);
    iVar6 = *(int *)(param_1 + 0x2c);
    if ((*(uint *)(param_1 + 0x14) & 0x20000) == 0) {
      if (*(char *)(iVar7 + 8) == '\x01') {
        iVar4 = *(int *)(iVar6 + 0x2c) + DAT_08107e04;
        *(undefined4 *)(iVar4 + 0x54) = 1;
        *(undefined4 *)(iVar4 + 0x68) = 0xff;
        if (*(char *)(iVar7 + 9) == *(char *)((uint)*(byte *)(iVar6 + 0x11) + DAT_08107e08)) {
          piVar3 = (int *)((uint)*(byte *)(iVar6 + 9) * 4 + DAT_08107e0c);
          *(undefined4 *)(iVar6 + 0xc) = 2;
          *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(*piVar3 + 8);
          *(undefined4 *)(iVar6 + 0x8c) = 0;
          *(undefined4 *)(iVar6 + 0x90) = 0;
          *(undefined1 *)(iVar6 + 0x94) = 0;
          *(byte *)(iVar6 + 10) = *(byte *)(iVar6 + 10) & 0xfb;
          *(undefined1 *)(iVar6 + 0xe) = 0;
          *(undefined1 *)(iVar6 + 0xb7) = 0;
          if (*(char *)(iVar6 + 0x10) == '\0') {
            iVar5 = *(int *)(iVar6 + 0x2c) + iVar5;
            bVar1 = *(byte *)(iVar6 + 0xb5);
            *(uint *)(iVar5 + 0x4c) = (uint)bVar1;
            if (bVar1 == 0) {
              *(undefined4 *)(iVar5 + 0x4c) = 1;
            }
            *(undefined4 *)(iVar5 + 0x44) = 1;
            *(undefined4 *)(iVar5 + 0x6c) = 1;
          }
          else {
            iVar5 = *(int *)(iVar6 + 0x2c) + iVar5;
            bVar1 = *(byte *)(iVar6 + 0xb5);
            *(uint *)(iVar5 + 0x50) = (uint)bVar1;
            if (bVar1 == 0) {
              *(undefined4 *)(iVar5 + 0x50) = 1;
            }
            *(undefined4 *)(iVar5 + 0x48) = 1;
            *(undefined4 *)(iVar5 + 0x70) = 1;
          }
          *(undefined1 *)(iVar6 + 0xb7) = 1;
          *(undefined4 *)(*(int *)(iVar6 + 0x2c) + DAT_08107e38 + 0x58) = 1;
        }
      }
    }
    else if ((*DAT_08107d84 != 0) &&
            (cVar2 = FUN_0803a578(*DAT_08107d84,6,
                                  *(undefined1 *)((uint)*(byte *)(iVar6 + 0x11) + DAT_08107d88)),
            cVar2 != '\0')) {
      *(undefined1 *)(iVar6 + 0xb4) = 1;
      piVar3 = (int *)((uint)*(byte *)(iVar6 + 9) * 4 + DAT_08107d8c);
      *(undefined4 *)(iVar6 + 0xc) = 2;
      *(undefined4 *)(iVar6 + 0x14) = *(undefined4 *)(*piVar3 + 8);
      *(undefined1 *)(iVar6 + 0xe) = 0;
      *(undefined4 *)(iVar6 + 0x8c) = 0;
      *(undefined4 *)(iVar6 + 0x90) = 0;
      *(undefined1 *)(iVar6 + 0x94) = 0;
      *(byte *)(iVar6 + 10) = *(byte *)(iVar6 + 10) & 0xfb;
    }
  }
  return in_lr;
}


