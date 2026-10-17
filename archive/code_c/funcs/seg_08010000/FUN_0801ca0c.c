// undefined FUN_0801ca0c(void)
// entry 0x801ca0c


undefined4 FUN_0801ca0c(int param_1,undefined4 param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  undefined4 in_lr;
  
  FUN_080054b4();
  iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 4);
  *(int *)(param_1 + 0xc) = iVar4;
  if (iVar4 != param_1 + 0x14) {
    do {
      if ((*(byte *)(iVar4 + 10) & 1) != 0) {
        iVar5 = iVar4 + 0x34;
        if ((*(byte *)(iVar4 + 10) & 8) == 0) {
          FUN_080033fc(param_2,iVar5,0,*(undefined1 *)(iVar4 + 0x25));
        }
        else {
          if ((*(uint *)((uint)(*(byte *)(iVar4 + 0x1d) >> 5) * 4 + DAT_0801ca6c) &
              1 << (*(byte *)(iVar4 + 0x1d) & 0x1f)) == 0) {
            bVar3 = *(char *)(iVar4 + 0x23) << 4;
            bVar1 = *(byte *)(iVar4 + 0x49);
          }
          else {
            bVar1 = *(byte *)(iVar4 + 0x49);
            bVar3 = 0xd0;
          }
          *(byte *)(iVar4 + 0x49) = bVar1 & 0xf | bVar3;
          pbVar2 = DAT_0801cad0;
          if ((*(byte *)(iVar4 + 10) & 0x40) != 0) {
            *(byte *)(iVar4 + 0x47) = *(byte *)(iVar4 + 0x47) & 0xc1 | (*DAT_0801cad0 & 0x1f) << 1;
            bVar1 = *pbVar2;
            if (bVar1 < 0x1f) {
              *pbVar2 = bVar1 + 1;
            }
            if ((*(byte *)(iVar4 + 0xb) & 1) == 0) {
              FUN_0800053c(iVar5,*(undefined1 *)(iVar4 + 0x24));
            }
            else if ((*(byte *)(iVar4 + 0xb) & 2) == 0) {
              FUN_08000590(iVar5,*(undefined1 *)(iVar4 + 0x24));
            }
            else {
              FUN_08000590(iVar5,*(undefined1 *)(iVar4 + 0x24));
            }
          }
          FUN_080033fc(param_2,iVar5,(*(byte *)(iVar4 + 0x49) & 0xf) >> 2,
                       *(undefined1 *)(iVar4 + 0x25));
        }
      }
      iVar4 = *(int *)(*(int *)(param_1 + 0xc) + 4);
      *(int *)(param_1 + 0xc) = iVar4;
    } while (iVar4 != param_1 + 0x14);
  }
  return in_lr;
}


